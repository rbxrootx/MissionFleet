// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534ABE .. +0x38 bytes.
extern "C" __declspec(naked) void __0CDumpContext__QAE_PAVCFile___Z_00534ABE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x534adb
        __asm _emit 0x74
        __asm _emit 0x10
        push 2fh
        push 5c7700h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 85 66 FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
