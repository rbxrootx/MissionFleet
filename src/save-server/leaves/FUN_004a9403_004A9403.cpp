// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9403 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004a9403_004A9403() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a9434
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4h
        push 672a58h
        ; Exact mapped bytes E8 11 F9 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a9434
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a940f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 39 97 08 00: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x97
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 413h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
