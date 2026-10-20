// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58612DD0 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_58612dd0_58612DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58612dec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 2E: jge 0x58612e20
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + eax*4]
        mov dword ptr [edx + ecx*4 + 19ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + eax*4]
        mov dword ptr [edx + ecx*4 + 1ach], eax
        ; Exact mapped bytes EB C3: jmp 0x58612de3
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 42 6C F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58612e52
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3F 31 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 30 06 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58612e84
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D 31 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 1E F8 FB FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x58612eb5
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DC 30 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 0D F8 FB FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58612ee7
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AA 30 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8A 30 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
