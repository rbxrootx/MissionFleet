// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10040460 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_10040460_10040460() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        lea esi, [ecx + 8]
        mov ebx, 20h
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x10040487
        __asm _emit 0x74
        __asm _emit 0x12
        push edi
        ; Exact mapped bytes E8 95 35 00 00: call 0x10043a10
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 144h], 1
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 E2: jne 0x1004046f
        __asm _emit 0x75
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
