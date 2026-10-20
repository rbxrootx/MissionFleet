// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506FC0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58506fc0_58506FC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax - 68h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx - 68h], 588a3d84h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 68h]
        mov eax, dword ptr [edx + 4]
        sub eax, 68h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 68h]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx - 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 50h
        ; Exact mapped bytes E8 8E FF FF FF: call 0x58506f90
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 48h
        ; Exact mapped bytes E8 63 FE FF FF: call 0x58506e70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
