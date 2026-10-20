// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F0EB0 .. +0x1AB bytes.
extern "C" __declspec(naked) void FUN_585f0eb0_585F0EB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 5A E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE B1 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb1
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x585f0ee2
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 07: jge 0x585f0eef
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 10h
        ; Exact mapped bytes 7D 4E: jge 0x585f0f43
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov eax, 10h
        sub eax, dword ptr [ebp - 8]
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], eax
        ; Exact mapped bytes 7C 20: jl 0x585f0f2a
        __asm _emit 0x7c
        __asm _emit 0x20
        mov edx, 10h
        sub edx, dword ptr [ebp - 8]
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        sub ecx, edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x585f0f37
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 40000000h
        ; Exact mapped bytes EB 60: jmp 0x585f0fa3
        __asm _emit 0xeb
        __asm _emit 0x60
        cmp dword ptr [ebp - 8], 2f0h
        ; Exact mapped bytes 7E 57: jle 0x585f0fa3
        __asm _emit 0x7e
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + edx - 5e0h]
        mov ecx, 4d0h
        sub ecx, eax
        sub ecx, 1a4h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b4h], ecx
        ; Exact mapped bytes 7F 1E: jg 0x585f0f8c
        __asm _emit 0x7f
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov edx, dword ptr [ebp - 8]
        lea eax, [ecx + edx*2 - 5e0h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], eax
        ; Exact mapped bytes EB 0D: jmp 0x585f0f99
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 32ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 40000000h
        cmp dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 7D 4E: jge 0x585f0ff7
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov ecx, 10h
        sub ecx, dword ptr [ebp - 0ch]
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b0h], ecx
        ; Exact mapped bytes 7C 20: jl 0x585f0fde
        __asm _emit 0x7c
        __asm _emit 0x20
        mov eax, 10h
        sub eax, dword ptr [ebp - 0ch]
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], edx
        ; Exact mapped bytes EB 0D: jmp 0x585f0feb
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 40000000h
        ; Exact mapped bytes EB 60: jmp 0x585f1057
        __asm _emit 0xeb
        __asm _emit 0x60
        cmp dword ptr [ebp - 0ch], 3f0h
        ; Exact mapped bytes 7E 57: jle 0x585f1057
        __asm _emit 0x7e
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + eax - 7e0h]
        mov edx, 708h
        sub edx, ecx
        sub edx, 3e8h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], edx
        ; Exact mapped bytes 7F 1E: jg 0x585f1040
        __asm _emit 0x7f
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*2 - 7e0h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x585f104d
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 320h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 40000000h
        mov esp, ebp
        pop ebp
        ret
    }
}
