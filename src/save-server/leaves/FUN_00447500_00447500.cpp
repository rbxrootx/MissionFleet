// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447500 .. +0x20A bytes.
extern "C" __declspec(naked) void FUN_00447500_00447500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 10h]
        sar eax, 2
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x44751d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8E 01 01 00 00: jle 0x447628
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 55 14: movsx edx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 48 FF: movsx ecx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0xff
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        neg eax
        sbb eax, eax
        inc eax
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x44755c
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x447706
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 0F BE 4D 14: movsx ecx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x44759c
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x447706
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 0F BE 45 14: movsx eax, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 51 FF: movsx edx, byte ptr [ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0xff
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        neg ecx
        sbb ecx, ecx
        inc ecx
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x4475dc
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x447706
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 0F BE 55 14: movsx edx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 48 FF: movsx ecx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0xff
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        neg eax
        sbb eax, eax
        inc eax
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x44761a
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x447706
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x447514
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x4476c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 49: je 0x44768a
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 74 05: je 0x44764c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x4476fb
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 55 14: movsx edx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 48 FF: movsx ecx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0xff
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        neg eax
        sbb eax, eax
        inc eax
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x447681
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x447706
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 0F BE 4D 14: movsx ecx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x4476be
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 48: jmp 0x447706
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 0F BE 45 14: movsx eax, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 51 FF: movsx edx, byte ptr [ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0xff
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        neg ecx
        sbb ecx, ecx
        inc ecx
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x4476fb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 0B: jmp 0x447706
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
