// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3960 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587c3960_587C3960() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 27: je 0x587c3997
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        lea ecx, [ebp + 8]
        push ecx
        push 1
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587c3999
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
