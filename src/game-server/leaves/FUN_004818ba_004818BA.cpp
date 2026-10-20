// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004818BA .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_004818ba_004818BA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c2dbh
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 581cd8h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0cbch], 0
        ; Exact mapped bytes 74 25: je 0x481927
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0cbch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 F2 BA 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0cbch], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ca8h
        ; Exact mapped bytes E8 AB 03 00 00: call 0x481ce0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BF 7E 00 00: call 0x489803
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 88 6E 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
