// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588746CE .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_588746ce_588746CE() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x588746da
        __asm _emit 0x75
        __asm _emit 0xf9
        push edi
        mov edi, dword ptr [ebp + 10h]
        sub ecx, edx
        mov eax, edi
        inc ecx
        not eax
        mov dword ptr [ebp - 4], ecx
        cmp ecx, eax
        ; Exact mapped bytes 76 06: jbe 0x588746f9
        __asm _emit 0x76
        __asm _emit 0x06
        push 0ch
        pop eax
        pop edi
        leave
        ret
        push ebx
        push esi
        lea ebx, [edi + 1]
        add ebx, ecx
        push 1
        push ebx
        ; Exact mapped bytes E8 08 AB FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 12: je 0x58874722
        __asm _emit 0x74
        __asm _emit 0x12
        push edi
        push dword ptr [ebp + 0ch]
        push ebx
        push esi
        ; Exact mapped bytes E8 15 1A FF FF: call 0x58866130
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 50: jne 0x58874772
        __asm _emit 0x75
        __asm _emit 0x50
        push dword ptr [ebp - 4]
        sub ebx, edi
        lea eax, [esi + edi]
        push dword ptr [ebp + 8]
        push ebx
        push eax
        ; Exact mapped bytes E8 FC 19 FF FF: call 0x58866130
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x58874772
        __asm _emit 0x75
        __asm _emit 0x37
        mov ebx, dword ptr [ebp + 14h]
        mov ecx, ebx
        ; Exact mapped bytes E8 EB 02 00 00: call 0x58874a30
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5887475a
        __asm _emit 0x74
        __asm _emit 0x0c
        push esi
        ; Exact mapped bytes E8 BC 84 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 4]
        pop ecx
        ; Exact mapped bytes EB 0B: jmp 0x58874765
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [eax], esi
        mov esi, edi
        add dword ptr [ebx + 4], 4
        push edi
        ; Exact mapped bytes E8 A5 84 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes EB 84: jmp 0x588746f6
        __asm _emit 0xeb
        __asm _emit 0x84
        xor edi, edi
        push edi
        push edi
        push edi
        push edi
        push edi
        ; Exact mapped bytes E8 5B C8 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
