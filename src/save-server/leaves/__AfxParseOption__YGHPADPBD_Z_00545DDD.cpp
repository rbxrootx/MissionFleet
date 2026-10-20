// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545DDD .. +0x93 bytes.
extern "C" __declspec(naked) void __AfxParseOption__YGHPADPBD_Z_00545DDD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 6E: je 0x545e68
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2dh
        ; Exact mapped bytes 74 0B: je 0x545e10
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2fh
        ; Exact mapped bytes 75 4D: jne 0x545e5d
        __asm _emit 0x75
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 6C 39 F0 FF: call 0x449790
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x545e5d
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 1]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0D FE F1 FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes EB 0D: jmp 0x545e6a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 88: jmp 0x545df0
        __asm _emit 0xeb
        __asm _emit 0x88
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
