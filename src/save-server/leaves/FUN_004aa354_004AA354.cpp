// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA354 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004aa354_004AA354() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 75 14: jne 0x4aa385
        __asm _emit 0x75
        __asm _emit 0x14
        push 20ch
        push 672a58h
        ; Exact mapped bytes E8 C0 E9 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aa385
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4aa360
        __asm _emit 0x75
        __asm _emit 0xd5
        push 28h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 28 B5 FB FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 102dh
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
