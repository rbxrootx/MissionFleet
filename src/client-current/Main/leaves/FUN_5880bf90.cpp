// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880BF90 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_5880bf90() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 1018h]
        mov ecx, 1
        push esi
        cmp dword ptr [edx + 28h], ecx
        ; Exact mapped bytes 75 3B: jne 0x5880bfe4
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx + 10ch]
        imul edx, edx, 55h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 10ch], eax
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 21c90h]
        xor eax, dword ptr [ecx + 138h]
        imul eax, eax, 4bh
        ; Exact mapped bytes EB 6D: jmp 0x5880c051
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 0B: cmp word ptr [eax + 0x105f0], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x5880c0a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 88 A4 05 01 00: cmp word ptr [eax + 0x105a4], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x5880c0a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx + 10ch]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        add edx, edx
        add edx, edx
        add edx, edx
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 10ch], eax
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 21c90h]
        xor edx, dword ptr [ecx + 138h]
        mov eax, edx
        shl eax, 4
        sub eax, edx
        add eax, eax
        add eax, eax
        add eax, eax
        mov dword ptr [ecx + 138h], eax
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 21c90h]
        xor edx, eax
        mov dword ptr [ecx + 138h], edx
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 21c90h]
        xor esi, edx
        mov eax, 51eb851fh
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 138h], eax
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 21c90h]
        xor edx, eax
        mov dword ptr [ecx + 138h], edx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
