// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487056 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00487056_00487056() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 1E: je 0x48708c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 54 17 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 47 17 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
