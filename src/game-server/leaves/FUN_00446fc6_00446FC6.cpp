// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446FC6 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_00446fc6_00446FC6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 168h], 0
        ; Exact mapped bytes 74 27: je 0x447007
        __asm _emit 0x74
        __asm _emit 0x27
        push 217bch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40cbch]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        push edx
        ; Exact mapped bytes E8 1C 20 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 17 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
