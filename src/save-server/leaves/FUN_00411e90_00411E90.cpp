// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411E90 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00411e90_00411E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 40cc0h], 0
        ; Exact mapped bytes 75 02: jne 0x411ec2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 49: jmp 0x411f0b
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 40cc0h]
        ; Exact mapped bytes E8 1C F6 FE FF: call 0x4014ec
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x411f0b
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4B F7 FE FF: call 0x40162c
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x411efe
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 AE A5 0B 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E F9 FE FF: call 0x401834
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB C8: jmp 0x411ed3
        __asm _emit 0xeb
        __asm _emit 0xc8
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 D8 2E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
