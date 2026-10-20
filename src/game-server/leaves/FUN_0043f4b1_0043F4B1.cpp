// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F4B1 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_0043f4b1_0043F4B1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 40cdch]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 40cdch], cl
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 40cdch]
        cmp ecx, 14h
        ; Exact mapped bytes 7E 73: jle 0x43f568
        __asm _emit 0x7e
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 40cb0h], 0
        ; Exact mapped bytes 74 0E: je 0x43f50f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40cb0h]
        ; Exact mapped bytes E8 C5 46 FC FF: call 0x403bd4
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        ; Exact mapped bytes E8 E5 5F 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 AE 92 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 0A 00 00: call 0x440020
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 C0 5F 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 89 92 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 0B 00 00: call 0x440060
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 40cdch], 0
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6D 92 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
