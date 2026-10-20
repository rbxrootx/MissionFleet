// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410640 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_00410640_00410640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 170h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 170h]
        mov ecx, 5ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18ch
        ; Exact mapped bytes E8 C2 CD 09 00: call 0x4ad437
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], 1
        mov dword ptr [ebp - 114h], 3ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 130h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x4106a3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 130h]
        add edx, 1
        mov dword ptr [ebp - 130h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18ch
        ; Exact mapped bytes E8 26 CB 09 00: call 0x4ad1d7
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 130h], eax
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x41074b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 124h], 0
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18ch
        ; Exact mapped bytes E8 E1 9C 09 00: call 0x4aa3d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B0 12 FF FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 0C FF FF: call 0x401384
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 130h]
        add eax, 1
        mov esi, esp
        push eax
        push 633e1ch
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 CB 46 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        lea edx, [ebp - 104h]
        mov dword ptr [ebp - 118h], edx
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18ch
        ; Exact mapped bytes E8 39 CB 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x410694
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 170h
        cmp ebp, esp
        ; Exact mapped bytes E8 90 46 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
