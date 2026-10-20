// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857FC80 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_5857fc80_5857FC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7F 82 F0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 82 F0 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 4E: je 0x5857fd11
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 38 72 F0 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5A FF F4 FF: call 0x584cfc50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
