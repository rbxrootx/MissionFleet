// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044AFE7 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_0044afe7_0044AFE7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        mov dl, byte ptr [ecx + 91h]
        cmp edx, 0ffh
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x44b0de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 4
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        mov dl, byte ptr [ecx + 91h]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 38 AE FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x44b0de
        __asm _emit 0x74
        __asm _emit 0x7f
        mov dword ptr [ebp - 10h], 31h
        mov dword ptr [ebp - 14h], 0
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 168h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 91h]
        lea edx, [eax + ecx*4 + 78h]
        push edx
        ; Exact mapped bytes E8 F7 AD FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x44b0de
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp - 18h]
        mov edx, dword ptr [edx + 168h]
        xor ebx, ebx
        mov bl, byte ptr [edx + 91h]
        mov eax, dword ptr [eax + ebx*4 + 78h]
        imul eax, eax, 370h
        cmp dword ptr [ecx + eax + 16bdch], 0
        ; Exact mapped bytes 75 07: jne 0x44b0de
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x44b0e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebx
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 F5 D6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
