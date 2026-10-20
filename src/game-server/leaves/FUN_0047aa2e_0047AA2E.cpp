// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047AA2E .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_0047aa2e_0047AA2E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 424h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 424h]
        mov ecx, 109h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 424h], ecx
        mov eax, dword ptr [ebp - 424h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 9F 68 F8 FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x47aa71
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 68 F8 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x47ab78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 424h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 0fch], 8
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x47ab73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 418h], 7fh
        mov dword ptr [ebp - 41ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 420h], edx
        lea eax, [ebp - 418h]
        push eax
        lea ecx, [ebp - 41ch]
        push ecx
        lea edx, [ebp - 420h]
        push edx
        ; Exact mapped bytes E8 EC 8C F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x47ab73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        push ecx
        mov edx, dword ptr [ebp - 424h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 C9 F7 F8 FF: call 0x40a2c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 78: je 0x47ab73
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 8C 01 E4 6B 01 00: mov cx, word ptr [ecx + eax + 0x16be4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D F4 FB FF FF: mov word ptr [ebp - 0x40c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 408h], 1
        mov dword ptr [ebp - 410h], 80020700h
        mov byte ptr [ebp - 404h], 4fh
        sub esp, 410h
        mov ecx, 104h
        lea esi, [ebp - 414h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 424h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d74h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 6D F7 F8 FF: call 0x40a2e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 EE FE FF FF: jmp 0x47aa66
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 424h
        cmp ebp, esp
        ; Exact mapped bytes E8 59 DC 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
