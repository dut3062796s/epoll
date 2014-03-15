package com.wizzardo.epoll.readable;

import java.lang.*;
import java.nio.ByteBuffer;

/**
 * @author: wizzardo
 * Date: 2/27/14
 */
public class ReadableByteArray implements ReadableBytes {
    protected byte[] bytes;
    protected int offset, length;

    public ReadableByteArray(byte[] bytes) {
        this(bytes, 0, bytes.length);
    }

    public ReadableByteArray(byte[] bytes, int offset, int length) {
        this.bytes = bytes;
        this.offset = offset;
        this.length = length;
    }

    @Override
    public int read(ByteBuffer byteBuffer) {
        int r = Math.min(byteBuffer.remaining(), length);
        byteBuffer.put(bytes, offset, r);
        offset += r;
        length -= r;
        return r;
    }

    @Override
    public void unread(int i) {
        if (i < 0)
            throw new IllegalArgumentException("can't unread negative value: " + i);
        if (i > offset)
            throw new IllegalArgumentException("can't unread value bigger than offset (" + offset + "): " + i);
        offset -= i;
        length += i;
    }

    @Override
    public boolean isComplete() {
        return length == 0;
    }
}