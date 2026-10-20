// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E52A .. +0x4A bytes.
extern "C" __declspec(naked) void _OnEnableModeless_COleFrameHook__UAEXH_Z_0055E52A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 10bh
        push 5cff18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 1C CC F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x55e55b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [eax + 5ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 02: je 0x55e55d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 11: jmp 0x55e56e
        __asm _emit 0xeb
        __asm _emit 0x11
        push 55e854h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 00 00 00: call 0x55e648
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
