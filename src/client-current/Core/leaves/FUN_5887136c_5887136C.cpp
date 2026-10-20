// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887136C .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5887136c_5887136C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes FF 05 1C 96 96 58: inc dword ptr [0x5896961c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push 1
        mov edi, 1000h
        push edi
        ; Exact mapped bytes E8 87 DE FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E8 7D B8 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [esi + 0ch]
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 74 08: je 0x588713a7
        __asm _emit 0x74
        __asm _emit 0x08
        push 40h
        pop ecx
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        ; Exact mapped bytes EB 11: jmp 0x588713b8
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, 400h
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        lea eax, [esi + 14h]
        push 2
        mov dword ptr [esi + 4], eax
        pop edi
        mov dword ptr [esi + 18h], edi
        mov eax, dword ptr [esi + 4]
        and dword ptr [esi + 8], 0
        pop edi
        mov dword ptr [esi], eax
        pop esi
        pop ebp
        ret
    }
}
