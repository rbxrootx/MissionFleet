// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474E2C .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_00474e2c_00474E2C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 24h], ecx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 D9 18 00 00: call 0x476730
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 05 19 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 24 1C 00 00: call 0x476aa0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x474edc
        __asm _emit 0x74
        __asm _emit 0x57
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 63 1B 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 33: je 0x474ecc
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x474ec5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 20 39 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x474ecc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 46 1B 00 00: call 0x476a20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 94: jmp 0x474e70
        __asm _emit 0xeb
        __asm _emit 0x94
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 69 19 00 00: call 0x476850
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 ED 38 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
