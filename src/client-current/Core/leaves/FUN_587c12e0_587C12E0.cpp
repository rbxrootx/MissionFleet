// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C12E0 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_587c12e0_587C12E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 75 22: jne 0x587c1315
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ecx + 88h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 62: jmp 0x587c1377
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 BD 36 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x36
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x587c1377
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 88h]
        cmp ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes 75 17: jne 0x587c1352
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 97 36 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x36
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 80 36 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x36
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
