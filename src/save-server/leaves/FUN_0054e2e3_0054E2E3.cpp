// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E2E3 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0054e2e3_0054E2E3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0D: jne 0x54e2fd
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], 0
        xor eax, eax
        ; Exact mapped bytes EB 65: jmp 0x54e362
        __asm _emit 0xeb
        __asm _emit 0x65
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 5A 51 F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x51
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54e321
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 67bee8h
        ; Exact mapped bytes E8 24 AA FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e321
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x54e2fd
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x54e33e
        __asm _emit 0x75
        __asm _emit 0x11
        push 58h
        push 67bee8h
        ; Exact mapped bytes E8 07 AA FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e33e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x54e327
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
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
