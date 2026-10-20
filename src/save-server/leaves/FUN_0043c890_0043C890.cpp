// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C890 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0043c890_0043C890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x43c8dc
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43c8cc
        __asm _emit 0x76
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 E2 FB 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x43c8dc
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 97 78 FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
