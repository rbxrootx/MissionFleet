// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047CDC0 .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_0047cdc0_0047CDC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c222h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0e4h
        push edi
        push ecx
        lea edi, [ebp - 0f0h]
        mov ecx, 39h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0f0h], ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 8C 03 00 00: call 0x47d190
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 82 E6 01 00 00: jb 0x47cff3
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], 0fh
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 A7 FC FF FF: call 0x47cad0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 47cb20h
        push 47d150h
        push 10h
        push 0ch
        lea ecx, [ebp - 0cch]
        push ecx
        ; Exact mapped bytes E8 66 BC 02 00: call 0x4a8ab0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 4D 03 00 00: call 0x47d1b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x47cf92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0e8h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 1E FD FF FF: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        lea edx, [ebp - 0ech]
        push edx
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 02 FD FF FF: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 54 05 00 00: call 0x47d400
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x47cec7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0e4h]
        add ecx, 1
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, dword ptr [ebp - 0e4h]
        cmp edx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes 73 58: jae 0x47cf2d
        __asm _emit 0x73
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 0e4h]
        imul eax, eax, 0ch
        lea ecx, [ebp + eax - 0cch]
        ; Exact mapped bytes E8 C6 02 00 00: call 0x47d1b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x47cf2d
        __asm _emit 0x75
        __asm _emit 0x3a
        lea ecx, [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        imul edx, edx, 0ch
        lea ecx, [ebp + edx - 0cch]
        ; Exact mapped bytes E8 91 05 00 00: call 0x47d4a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        imul ecx, ecx, 0ch
        lea ecx, [ebp + ecx - 0cch]
        ; Exact mapped bytes E8 05 04 00 00: call 0x47d330
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8B: jmp 0x47ceb8
        __asm _emit 0xeb
        __asm _emit 0x8b
        cmp dword ptr [ebp - 0e4h], 0fh
        ; Exact mapped bytes 75 1E: jne 0x47cf54
        __asm _emit 0x75
        __asm _emit 0x1e
        lea edx, [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        imul eax, eax, 0ch
        lea ecx, [ebp + eax - 0cch]
        ; Exact mapped bytes E8 4E 05 00 00: call 0x47d4a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x47cf8d
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        imul edx, edx, 0ch
        lea ecx, [ebp + edx - 0cch]
        ; Exact mapped bytes E8 C0 03 00 00: call 0x47d330
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e4h]
        cmp eax, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes 75 0F: jne 0x47cf8d
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0e0h]
        add ecx, 1
        mov dword ptr [ebp - 0e0h], ecx
        ; Exact mapped bytes E9 C6 FE FF FF: jmp 0x47ce58
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 76 2D: jbe 0x47cfc8
        __asm _emit 0x76
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 0e0h]
        sub edx, 1
        mov dword ptr [ebp - 0e0h], edx
        mov eax, dword ptr [ebp - 0e0h]
        imul eax, eax, 0ch
        lea ecx, [ebp + eax - 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 DA 04 00 00: call 0x47d4a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CA: jmp 0x47cf92
        __asm _emit 0xeb
        __asm _emit 0xca
        mov byte ptr [ebp - 4], 0
        push 47cb20h
        push 10h
        push 0ch
        lea edx, [ebp - 0cch]
        push edx
        ; Exact mapped bytes E8 6F B9 02 00: call 0x4a8950
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 2D FB FF FF: call 0x47cb20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        add esp, 0f0h
        cmp ebp, esp
        ; Exact mapped bytes E8 D5 B7 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
