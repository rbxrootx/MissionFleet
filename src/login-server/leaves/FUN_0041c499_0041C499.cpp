// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041C499 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_0041c499_0041C499() {
    __asm {
        lea eax, [esp + 4]
        push esi
        mov esi, ecx
        push eax
        ; Exact mapped bytes E8 D5 F5 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 2D: je 0x41c4d7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [eax + 4]
        mov edx, ecx
        and edx, 3
        add eax, edx
        add eax, dword ptr [esi + 8]
        mov eax, dword ptr [eax + ecx + 4]
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [ecx], eax
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x41c4d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
