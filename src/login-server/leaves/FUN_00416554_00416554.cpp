// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416554 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_00416554_00416554() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov ecx, eax
        shl ecx, 4
        mov edx, dword ptr [edi + 3ch]
        lea ebx, [eax - 1]
        push ebx
        lea esi, [edx + ecx - 10h]
        mov ecx, edi
        ; Exact mapped bytes E8 2E E7 FF FF: call 0x414ca5
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        mov ecx, edi
        mov byte ptr [esi + 0ch], al
        ; Exact mapped bytes E8 93 E7 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 33: jne 0x4165b9
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [esi + 8]
        cmp eax, 1
        ; Exact mapped bytes 74 1D: je 0x4165ab
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp eax, 2
        ; Exact mapped bytes 74 18: je 0x4165ab
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, 3
        ; Exact mapped bytes 74 13: je 0x4165ab
        __asm _emit 0x74
        __asm _emit 0x13
        cmp eax, 4
        ; Exact mapped bytes 74 0E: je 0x4165ab
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 6
        ; Exact mapped bytes 74 09: je 0x4165ab
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        lea eax, [ebp + 10h]
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes EB 06: jmp 0x4165b1
        __asm _emit 0xeb
        __asm _emit 0x06
        push eax
        lea eax, [ebp + 10h]
        push eax
        push esi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 DD 01 00 00: call 0x416796
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
