// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851A78 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_58851a78_58851A78() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 18h], 0
        push edi
        ; Exact mapped bytes 75 23: jne 0x58851aa7
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 8F F4 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 6D: jmp 0x58851b14
        __asm _emit 0xeb
        __asm _emit 0x6d
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 74 43: je 0x58851af2
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 76 3D: jbe 0x58851af2
        __asm _emit 0x76
        __asm _emit 0x3d
        push dword ptr [ebp + 20h]
        mov edi, dword ptr [ebp + 1ch]
        push edi
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F FB FF FF: call 0x5885160d
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        add esp, 1ch
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 79 02: jns 0x58851adb
        __asm _emit 0x79
        __asm _emit 0x02
        mov byte ptr [esi], al
        cmp ecx, -2
        ; Exact mapped bytes 75 0E: jne 0x58851aee
        __asm _emit 0x75
        __asm _emit 0x0e
        mov byte ptr [edi + 1ch], 1
        mov dword ptr [edi + 18h], 22h
        push edi
        ; Exact mapped bytes EB 15: jmp 0x58851b03
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, ecx
        ; Exact mapped bytes EB 21: jmp 0x58851b13
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 21 F4 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        pop esi
        pop edi
        pop ebp
        ret
    }
}
