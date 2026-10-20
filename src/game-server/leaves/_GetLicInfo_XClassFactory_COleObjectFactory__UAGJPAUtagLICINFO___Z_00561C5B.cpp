// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561C5B .. +0x66 bytes.
extern "C" __declspec(naked) void _GetLicInfo_XClassFactory_COleObjectFactory__UAGJPAUtagLICINFO___Z_00561C5B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 44h
        mov dword ptr [ebp - 8], eax
        push 1b8h
        push 5ce6c8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 E3 94 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 FD FF FF: call 0x561a02
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        lea eax, [ebp - 4]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x561cb9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
