// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409740 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_00409740_00409740() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439c3ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18ch
        mov dword ptr [ebp - 198h], ecx
        push 0
        ; Exact mapped bytes E8 E9 D3 00 00: call 0x416b54
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 0
        ; Exact mapped bytes E8 EB 57 00 00: call 0x40ef60
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 43 CC 02 00: call 0x4363c3
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 EF 01 00 00: call 0x40997c
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 198h]
        lea ecx, [ebp - 190h]
        mov dword ptr [eax + 1ch], ecx
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 0F 52 02 00: call 0x42e9bd
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 194h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 73 00 00 00: call 0x409840
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 194h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
