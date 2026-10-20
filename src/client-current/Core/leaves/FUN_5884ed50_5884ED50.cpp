// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884ED50 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5884ed50_5884ED50() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi]
        cmp eax, -2
        ; Exact mapped bytes 74 0D: je 0x5884ed6f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 4]
        add ecx, edi
        xor ecx, dword ptr [eax + edi]
        ; Exact mapped bytes E8 E1 22 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0ch]
        add ecx, edi
        xor ecx, dword ptr [eax + edi]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes E9 CE 22 FE FF: jmp 0x58831050
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
