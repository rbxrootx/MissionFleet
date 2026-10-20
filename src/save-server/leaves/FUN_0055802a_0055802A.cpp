// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055802A .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0055802a_0055802A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 27eh
        push 67c630h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 17 22 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x558066
        __asm _emit 0x75
        __asm _emit 0x14
        push 27fh
        push 67c630h
        ; Exact mapped bytes E8 DF 0C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558066
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x558049
        __asm _emit 0x75
        __asm _emit 0xdd
        push 641278h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 79 28 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x55809a
        __asm _emit 0x75
        __asm _emit 0x14
        push 282h
        push 67c630h
        ; Exact mapped bytes E8 AB 0C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55809a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x558080
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
