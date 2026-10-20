// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D1406B .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58d1406b() {
    __asm {
        ; Exact mapped bytes 0F 85 A6 E2 FF FF: jne 0x58d12317
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 66 0F A3 DF: bt di, bx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xa3
        __asm _emit 0xdf
        ; Exact mapped bytes 66 0F CF: bswap di
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xcf
        ; Exact mapped bytes 66 FF C3: inc bx
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xc3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 2B C0: sub eax, eax
        __asm _emit 0x2b
        __asm _emit 0xc0
        ; Exact mapped bytes 0F B7 FC: movzx edi, sp
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xfc
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 49 A6 FE FF: jmp 0x58cfe6d3
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
