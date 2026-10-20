// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567B5B .. +0x66 bytes.
extern "C" __declspec(naked) void _GetLicInfo_XClassFactory_COleObjectFactory__UAGJPAUtagLICINFO___Z_00567B5B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 44h
        mov dword ptr [ebp - 8], eax
        push 1b8h
        push 67aea0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 E3 26 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 FD FF FF: call 0x567902
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
        ; Exact mapped bytes 74 0A: je 0x567bb9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
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
