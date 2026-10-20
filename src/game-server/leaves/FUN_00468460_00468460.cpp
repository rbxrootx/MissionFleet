// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468460 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00468460_00468460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 581c60h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 77 4F 08 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 41 03 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
