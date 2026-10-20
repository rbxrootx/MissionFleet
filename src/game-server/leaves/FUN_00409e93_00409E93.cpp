// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409E93 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_00409e93_00409E93() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 108h]
        mov ecx, 42h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 75 5B: jne 0x409f1f
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40cd8h]
        ; Exact mapped bytes E8 38 0B 00 00: call 0x40aa10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 39: je 0x409f1a
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E5 E8 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 0
        push 0
        push 8001a002h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 D3 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x409fc6
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a0af0h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 A3 E8 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov eax, dword ptr [ebp - 108h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 6F 70 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 6D F4 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 47 70 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 01 05 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 D2 04 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C D2 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 108h
        cmp ebp, esp
        ; Exact mapped bytes E8 0B E8 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
