// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DD9B .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042dd9b_0042DD9B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x42ddd9
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E B8 FF FF: call 0x4295da
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 09 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E5: jmp 0x42ddbe
        __asm _emit 0xeb
        __asm _emit 0xe5
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 0D 70 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
