// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58E9F065 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58e9f065_58E9F065() {
    __asm {
        push edx
        ; Exact mapped bytes 66 99: cwd
        __asm _emit 0x66
        __asm _emit 0x99
        ; Exact mapped bytes 66 0F B6 D4: movzx dx, ah
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd4
        cdq
        push esi
        push ecx
        ; Exact mapped bytes 66 0F CE: bswap si
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xce
        push ebx
        pushfd
        mov bh, al
        mov edx, 2fa8334ah
        push edi
        dec bh
        ; Exact mapped bytes 66 8B F2: mov si, dx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xf2
        push ebp
        push eax
        cwde
        mov eax, 48480000h
        mov edx, ebp
        ; Exact mapped bytes 66 0F CA: bswap dx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xca
        push eax
        not bl
        mov esi, dword ptr [esp + 28h]
        inc esi
        or ebx, edi
        test edi, 200d3070h
        xor esi, 5efd38dch
        neg esi
        stc
        or ebp, 417d671eh
        xor esi, 717d3fb5h
        ; Exact mapped bytes 66 C1 CA 7B: ror dx, 0x7b
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xca
        __asm _emit 0x7b
        sub ebp, esi
        shl ebx, 60h
        lea esi, [esi + eax]
        mov edi, esp
        shl al, cl
        ; Exact mapped bytes 66 81 E5 7D 39: and bp, 0x397d
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0x7d
        __asm _emit 0x39
        btc edx, edi
        sub esp, 0c0h
        mov ebx, esi
        ; Exact mapped bytes 66 0F B3 F0: btr ax, si
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb3
        __asm _emit 0xf0
        sar edx, cl
        ; Exact mapped bytes 66 D3 DA: rcr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xda
        mov edx, 48480000h
        ; Exact mapped bytes 66 0F BA F0 E3: btr ax, 0xe3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xe3
        ; Exact mapped bytes 66 0F 47 E9: cmova bp, cx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x47
        __asm _emit 0xe9
        sub ebx, edx
        ; Exact mapped bytes 66 0F BC EA: bsf bp, dx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbc
        __asm _emit 0xea
        sub ah, dh
        ; Exact mapped bytes 8D 2D F2 F0 E9 58: lea ebp, [0x58e9f0f2]
        __asm _emit 0x8d
        __asm _emit 0x2d
        __asm _emit 0xf2
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0x58
        ; Exact mapped bytes 66 FF C0: inc ax
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xc0
        movzx eax, bp
        lahf
        mov eax, dword ptr [esi]
        ; Exact mapped bytes E9 F7 EE 05 00: jmp 0x58efdffd
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
    }
}
