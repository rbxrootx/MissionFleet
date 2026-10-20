// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E440 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_0040e440_0040E440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 80h]
        mov ecx, 20h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov esi, esp
        push 1ch
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 0C B8 68 00: call dword ptr [0x68b80c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7C 69 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x40e47f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x40e56a
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov esi, esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 69 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x40e4ab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x40e56a
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 14: mov cx, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 28h]
        lea eax, [edx + ecx + 18h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 12: jmp 0x40e4f4
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 28h
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp dword ptr [ebp - 34h], edx
        ; Exact mapped bytes 73 66: jae 0x40e568
        __asm _emit 0x73
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 76 0B: jbe 0x40e524
        __asm _emit 0x76
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 09: jmp 0x40e52d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 30h]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 72 25: jb 0x40e563
        __asm _emit 0x72
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 77 1D: ja 0x40e563
        __asm _emit 0x77
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 30h]
        sub edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x40e56a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x40e4e2
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 80h
        cmp ebp, esp
        ; Exact mapped bytes E8 76 68 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
