// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F859D .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_004f859d_004F859D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ca8fh
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
        sub esp, 24h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 673168h
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 31 C7 02 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 2ch]
        push edx
        push 0f114h
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 A0 C8 00 00: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f114h
        push 30h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 AC C7 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DD E4 FF FF: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 46 41 FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB ED FF FF: call 0x4f73ef
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 C9 42 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
