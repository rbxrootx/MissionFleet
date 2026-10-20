// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CE9C .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_0041ce9c_0041CE9C() {
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
        ; Exact mapped bytes E8 C9 1B 00 00: call 0x41ea90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 F5 1B 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 14 1F 00 00: call 0x41ee00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x41cf4c
        __asm _emit 0x74
        __asm _emit 0x57
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 53 1E 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 33: je 0x41cf3c
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x41cf35
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
        ; Exact mapped bytes E8 B0 B8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x41cf3c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 36 1E 00 00: call 0x41ed80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 94: jmp 0x41cee0
        __asm _emit 0xeb
        __asm _emit 0x94
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 59 1C 00 00: call 0x41ebb0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 7D B8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
