// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543584 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00543584_00543584() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 160h
        push 5c5db4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C2 7B FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 17: je 0x5435c1
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ach]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b8h], 0
        ; Exact mapped bytes 74 1C: je 0x5435e9
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        push 583248h
        push 583258h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 BE FC FF: call 0x50f490
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
