// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A820 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_5883a820_5883A820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, ecx
        push ebx
        push esi
        push edi
        mov ebx, dword ptr [eax]
        mov edi, ebx
        mov dword ptr [ebp - 4], eax
        mov esi, dword ptr [ebx + 4]
        cmp byte ptr [esi + 0dh], 0
        ; Exact mapped bytes 75 38: jne 0x5883a871
        __asm _emit 0x75
        __asm _emit 0x38
        push dword ptr [ebp + 0ch]
        lea ecx, [esi + 10h]
        ; Exact mapped bytes E8 5C FE C6 FF: call 0x584aa6a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xc6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 79 05: jns 0x5883a84d
        __asm _emit 0x79
        __asm _emit 0x05
        mov esi, dword ptr [esi + 8]
        ; Exact mapped bytes EB 1B: jmp 0x5883a868
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 74 11: je 0x5883a864
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [esi + 10h]
        push eax
        ; Exact mapped bytes E8 41 FE C6 FF: call 0x584aa6a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xc6
        __asm _emit 0xff
        test eax, eax
        cmovs edi, esi
        mov ebx, esi
        mov esi, dword ptr [esi]
        cmp byte ptr [esi + 0dh], 0
        ; Exact mapped bytes 74 CB: je 0x5883a839
        __asm _emit 0x74
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 4]
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 74 07: je 0x5883a87e
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, dword ptr [eax]
        add esi, 4
        ; Exact mapped bytes EB 02: jmp 0x5883a880
        __asm _emit 0xeb
        __asm _emit 0x02
        mov esi, edi
        mov esi, dword ptr [esi]
        ; Exact mapped bytes EB 17: jmp 0x5883a89b
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [esi + 10h]
        push eax
        ; Exact mapped bytes E8 10 FE C6 FF: call 0x584aa6a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xc6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 79 04: jns 0x5883a898
        __asm _emit 0x79
        __asm _emit 0x04
        mov edi, esi
        ; Exact mapped bytes EB E8: jmp 0x5883a880
        __asm _emit 0xeb
        __asm _emit 0xe8
        mov esi, dword ptr [esi + 8]
        cmp byte ptr [esi + 0dh], 0
        ; Exact mapped bytes 74 E3: je 0x5883a884
        __asm _emit 0x74
        __asm _emit 0xe3
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edi
        pop edi
        pop esi
        mov dword ptr [eax], ebx
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
