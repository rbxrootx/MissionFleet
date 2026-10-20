// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412E30 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_00412e30_00412E30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 60h]
        mov ecx, 18h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x412f9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 4]
        sar edx, 2
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 82 11 01 00 00: jb 0x412f80
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp + 8]
        sar eax, 2
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 76 77: jbe 0x412f0e
        __asm _emit 0x76
        __asm _emit 0x77
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 A3 E5 FE FF: call 0x401460
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [ecx + edx*4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 2
        mov edx, dword ptr [ebp - 10h]
        sub edx, ecx
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 09 E4 FE FF: call 0x4012f8
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 FC E5 FE FF: call 0x401505
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 70: jmp 0x412f7e
        __asm _emit 0xeb
        __asm _emit 0x70
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 1C E1 FE FF: call 0x401041
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        lea ecx, [eax + ecx*4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0B E5 FE FF: call 0x401460
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8A E5 FE FF: call 0x401505
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 1A: jmp 0x412f9a
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 E4 FE FF: call 0x40146f
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 60h
        cmp ebp, esp
        ; Exact mapped bytes E8 49 1E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
