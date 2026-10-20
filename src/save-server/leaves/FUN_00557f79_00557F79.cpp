// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557F79 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_00557f79_00557F79() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 26eh
        push 67c630h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C8 22 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557fb5
        __asm _emit 0x75
        __asm _emit 0x14
        push 26fh
        push 67c630h
        ; Exact mapped bytes E8 90 0D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557fb5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557f98
        __asm _emit 0x75
        __asm _emit 0xdd
        push 641278h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 2A 29 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x557fe9
        __asm _emit 0x75
        __asm _emit 0x14
        push 272h
        push 67c630h
        ; Exact mapped bytes E8 5C 0D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557fe9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x557fcf
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
