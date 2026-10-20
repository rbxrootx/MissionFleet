// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D25C .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_0041d25c_0041D25C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 47 19 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 23 18 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 1A 1B 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41d2c3
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 76: jmp 0x41d339
        __asm _emit 0xeb
        __asm _emit 0x76
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 85 1A 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 60: je 0x41d337
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 90 8A 00 00 00: mov word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41d2fa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 30: jge 0x41d330
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi + eax*8 + 10h]
        mov dword ptr [edx + ecx*8 + 8ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi + eax*8 + 14h]
        mov dword ptr [edx + ecx*8 + 90h], eax
        ; Exact mapped bytes EB C1: jmp 0x41d2f1
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41d339
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 9C B4 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
