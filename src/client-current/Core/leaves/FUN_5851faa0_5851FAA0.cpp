// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851FAA0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5851faa0_5851FAA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax - 70h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx - 70h], 588a422ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 70h]
        mov eax, dword ptr [edx + 4]
        sub eax, 70h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 70h]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 60h
        ; Exact mapped bytes E8 3E FF FF FF: call 0x5851fa20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 58h
        ; Exact mapped bytes E8 E3 73 FE FF: call 0x58506ed0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
