// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438FCA .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_00438fca_00438FCA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        push edi
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov esi, esp
        push 1ch
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 38 24 5E 00: call dword ptr [0x5e2438]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E6 F7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x439005
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x4390f0
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 4], edx
        mov esi, esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BA F7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x439031
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x4390f0
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 14: mov cx, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 18h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 12: jmp 0x43907a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 28h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 73 66: jae 0x4390ee
        __asm _emit 0x73
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 76 0B: jbe 0x4390aa
        __asm _emit 0x76
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 09: jmp 0x4390b3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 72 25: jb 0x4390e9
        __asm _emit 0x72
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 77 1D: ja 0x4390e9
        __asm _emit 0x77
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x4390f0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x439068
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 E4 F6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
