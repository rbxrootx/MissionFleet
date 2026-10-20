// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8930 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_587c8930_587C8930() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 38: je 0x587c8978
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 60h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp eax, 887601c2h
        ; Exact mapped bytes 75 1D: jne 0x587c8978
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 4C FF FF: call 0x587bd5b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
