// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485F30 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58485f30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 50h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3A: je 0x58485f80
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 FA FF FF: call 0x58485990
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C CD FF FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 14h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov esp, ebp
        pop ebp
        ret 4
    }
}
